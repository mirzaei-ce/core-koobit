from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for koobit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@koobitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
