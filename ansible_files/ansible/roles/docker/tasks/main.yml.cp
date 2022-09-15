---
- name: Add Docker Rep
  get_url: 
     url: https://download.docker.com/linux/ubuntu
     dest: /etc/apt/docker

- name: Install pyton-pip
  apt:
    name:
     - python3-pip

- name: Install docker
  apt:
    name:
     - docker

- name: Download and Install Docker Compose
  get_url:
    url: https://github.com/docker/compose/releases/download/v2.11.0/docker-compose-darwin-x86_64
    dest: /usr/bin/docker-compose
    mode: 0755

      #- name: Install docker-py
      #  pip:
      #    name: 
      #      - docker-py

      #- name: start_docker
      #  service: name=docker enabled=yes state=restarted

...
