from setuptools import setup

package_name = 'maya'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='vidi',
    maintainer_email='v.perezb.2019@alumnos.urjc.es',
    description='Package to control Maya robot with ROS2',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'maya_driver = maya.maya_ros2_driver:main',
        ],
    },
)
