pipeline {
  agent {
    node {
      label 'local'
    }

  }
  stages {
    stage('input') {
      steps {
        input(message: 'qui c\'est ?', ok: 'ok')
        echo 'coucou'
      }
    }
  }
}