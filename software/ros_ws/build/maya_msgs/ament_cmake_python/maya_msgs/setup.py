from setuptools import find_packages
from setuptools import setup

setup(
    name='maya_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('maya_msgs', 'maya_msgs.*')),
)
