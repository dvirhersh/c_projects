#!/bin/bash

echo "Enter your name:" > /dev/tty
read name < /dev/tty
echo "Hello, $name!"