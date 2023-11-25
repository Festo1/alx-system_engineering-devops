#This code will install the packages puppet-lint
package { 'flask':
  ensure    =>  '2.1.0',
  provider  =>  'pip3',
}
