Pod::Spec.new do |s|

  s.name	 = "DSTableView"
  s.summary      = "A short description of DSTableView."
  s.version	 = "1.0.0"
  s.description  = "simple tableView test"

  s.homepage     = "https://github.com/MangoSmall/DSTableView"



  s.license      = "MIT"



  s.author       = "haochongfeng"
  s.requires_arc = true  


  s.platform     = :ios
  s.ios.deployment_target = "8.0"
 
  s.source       = { :git => "https://github.com/MangoSmall/DSTableView.git", :tag => s.version }
  s.source_files = 'DSTableView/*.swift'
  # s.resource  = "icon.png"
  # s.resources = "Resources/*.png"




end
