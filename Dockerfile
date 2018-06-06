FROM gcc:latest

MAINTAINER Prantar <prantarbhowmik@yhaoo.com>

# Set the WORKDIR to /app so all following commands run in /app
WORKDIR /app

# Adding the whole repository to the image
COPY . ./

CMD ["make"]
