from setuptools import find_packages
from setuptools import setup

setup(
    name='station_interface',
    version='0.0.0',
    packages=find_packages(
        include=('station_interface', 'station_interface.*')),
)
