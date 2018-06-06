# Starting from Python 3 base image
FROM ubuntu

MAINTAINER Prantar <prantarbhowmik@yhaoo.com>

# Set the WORKDIR to /app so all following commands run in /app
WORKDIR /app

# to get repository
RUN apt-get install software-properties-common
# set up c++17
RUN add-apt-repository -y ppa:ubuntu-toolchain-r/test
RUN apt-get update -qq
RUN apt-get install -qq g++-6
RUN update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-6 90
# set up cppcheck
RUN apt-get install -qq cppcheck

# Adding the whole repository to the image
COPY . ./

CMD ["make"]
CMD ["cppcheck", "--quiet", "--error-exitcode=1", "."]
