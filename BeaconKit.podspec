Pod::Spec.new do |s|
  s.name = 'BeaconKit'
  s.version = '0.1.0'
  s.summary = 'A short description of BeaconKit.'
  s.license = 'MIT'
  s.authors = {"Vendasta"=>"notabl@vendasta.com"}
  s.homepage = 'https://github.com/vendasta/BeaconKit'
  s.description = 'BeaconKit'
  s.requires_arc = true
  s.source = {}

  s.ios.deployment_target    = '9.0'
  s.ios.preserve_paths       = 'ios/BeaconKit.framework'
  s.ios.public_header_files  = 'ios/BeaconKit.framework/Versions/A/Headers/*.h'
  s.ios.resource             = 'ios/BeaconKit.framework/Versions/A/Resources/**/*'
  s.ios.vendored_frameworks  = 'ios/BeaconKit.framework'
  s.dependency 'AFNetworking', '~> 2.3'
  s.dependency 'EstimoteSDK', '~> 3.8.2'
end
