
from os.path import join

def configuration(parent_package='',top_path=None):
    from numpy.distutils.misc_util import Configuration
    config = Configuration('io',parent_package,top_path)

    return config
