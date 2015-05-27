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
  s.version          = '1.4.1.0'
  s.summary          = "The best Analytics and Segments SDK on the Planet!"
  s.description      = <<-DESC
                       Segment intelligence and Analytics framework that enables you to track user activity, 
                       installed apps and fetch Segments related to their phone Location/Use habits.

                       Have plugins for Unity and Android.
                       DESC
  s.homepage         = "http://apptient.com/"
  s.license          = 'MIT'
  s.author           = { "Bruno Bulic" => "brbulic@gmail.com" }
  s.source           = { :git => "https://github.com/APPTIENT/SegmentsSDK.git", :tag => s.version.to_s }

  s.platform     = :ios
  s.deprecated_in_favor_of = 'Apptient-Segments-SDK'

  s.source_files = ['Pod/**/*.h']
  s.libraries = ['z']
  s.frameworks = ['CoreTelephony', 'SystemConfiguration', 'CoreLocation']
  s.vendored_libraries = ["Pod/libSegmentsSDK_1.4.1.a"]

end