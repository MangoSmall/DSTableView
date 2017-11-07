Pod::Spec.new do |s|

  s.summary      = "A short description of DSTableView."

  s.description  = <<-DESC
                   DESC

  s.homepage     = "http://EXAMPLE/DSTableView"



  s.license      = "MIT (example)"



  s.author             = { "haochongfeng" => "haocf@7moor.com" }


  s.platform     = :ios

  s.ios.deployment_target = "5.0"

  s.source       = { :git => "http://EXAMPLE/DSTableView.git", :tag => "#{s.version}" }


  s.source_files  = "Classes", "Classes/**/*.{h,m}"
  s.exclude_files = "Classes/Exclude"


  # s.resource  = "icon.png"
  # s.resources = "Resources/*.png"




end
