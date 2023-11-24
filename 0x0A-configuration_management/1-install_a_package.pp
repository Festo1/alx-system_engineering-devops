# installs flask from pip3

package { 'flask':
  ensure => '2.1.0',
  provider => 'pip3',
  version => '2.1.0',
}

