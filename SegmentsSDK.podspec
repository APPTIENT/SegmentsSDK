#
# Be sure to run `pod lib lint SegmentsSDK.podspec' to ensure this is a
# valid spec and remove all comments before submitting the spec.
#
# Any lines starting with a # are optional, but encouraged
#
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = "SegmentsSDK"
  s.version          = '1.4.1'
  s.summary          = "The best Analytics and Segments SDK on the Planet!"
  s.description      = <<-DESC
                       Just add pod, install and oh joy!
                       DESC
  s.homepage         = "https://github.com/brbulic/MetrixSDK-iOS"
  s.license          = 'MIT'
  s.author           = { "Bruno Bulic" => "brbulic@gmail.com" }
  s.source           = { :git => "https://github.com/brbulic/MetrixSDK-iOS.git", :tag => s.version.to_s }

  s.platform     = :ios

  s.source_files = ['Pod/**/*.h']
  s.libraries = ['z']
  s.frameworks = ['CoreTelephony', 'SystemConfiguration', 'CoreLocation']
  s.vendored_libraries = ["Pod/libSegmentsSDK_#{s.version}.a"]

end