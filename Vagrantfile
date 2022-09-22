Vagrant.configure("2") do |config|
 config.vm.provider "virtualbox" do |vb|
  vb.name = "host_docker"
  vb.memory = 1024
  vb.cpus = 1
 end

  config.vm.box = "hashicorp/bionic64"
  config.vm.network "forwarded_port", guest: 80, host: 8080
  config.vm.network "public_network"
  config.vm.provision "shell", path: "script_ansible.sh"
  config.vm.provision "ansible" do |ansible|
    ansible.playbook = "ansible_files/main.yml"

end

