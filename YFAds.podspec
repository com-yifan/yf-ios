Pod::Spec.new do |s|
  s.name = "YFAds"
  s.version = "5.3.3.8-bate"
  s.summary = "iOS YFAdsSDK"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"yifan"=>"576661787@qq.com"}
  s.homepage = "http://www.yifan.com/"
  s.description = "YFAds"
  s.requires_arc = true
  s.static_framework = true
  s.ios.deployment_target    = '11.0'

  s.source  = { :git => "https://github.com/com-yifan/yf-ios.git", :tag => "#{s.version}" }
  valid_archs = ['x86_64', 'arm64']
  s.user_target_xcconfig = {'OTHER_LDFLAGS' => ['-ObjC']}
  s.pod_target_xcconfig = { 'ONLY_ACTIVE_ARCH' => 'YES' }
  s.pod_target_xcconfig = {'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'x86_64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'x86_64' }
  # s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO'}
  # s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO'}

  # s.pod_target_xcconfig =   {'OTHER_LDFLAGS' => ['-lObjC']}
  # s.libraries = 'c++', 'z', 'sqlite3', 'xml2', 'resolv'
  # s.pod_target_xcconfig = { 'VALID_ARCHS' => 'x86_64 armv7 armv7s arm64' }
  s.default_subspecs = 'YFAdsSDK'

  s.subspec 'YFAdsSDK' do |ss|
    ss.vendored_frameworks = 'SDK/YFAdsSDK.framework'
    ss.resource = 'SDK/YFAdsSDK.bundle'
  end
  
  # s.subspec 'YFAdsCSJAdapter' do |ss|
  #   ss.dependency 'Ads-CN'
  #   ss.dependency 'YFAds/YFAdsSDK'
  #   ss.vendored_frameworks = 'SDK/YFAdsCSJAdapter.framework'
  # end

  
  #  s.subspec 'YFAdsBDAdapter' do |ss|
  #   ss.dependency 'BaiduMobAdSDK','5.332'
  #   ss.dependency 'YFAds/YFAdsSDK'
  #   ss.vendored_frameworks = 'SDK/YFAdsBDAdapter.framework'
  # end

  s.subspec 'YFAdsGDTAdapter' do |ss|
    ss.ios.deployment_target    = '11.0'
    ss.pod_target_xcconfig = {'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    ss.user_target_xcconfig = {'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }
    ss.dependency 'GDTMobSDK','4.14.32'
    ss.dependency 'YFAds/YFAdsSDK'
    ss.vendored_frameworks = 'SDK/YFAdsGDTAdapter.framework'

  end

  # s.subspec 'YFAdsKSAdapter' do |ss|
  #   ss.dependency 'KSAdSDK','3.3.61'
  #   ss.dependency 'YFAds/YFAdsSDK'
  #   ss.frameworks = ["Foundation", "UIKit", "MobileCoreServices", "CoreGraphics", "Security", "SystemConfiguration", "CoreTelephony", "AdSupport", "CoreData", "StoreKit", "AVFoundation", "MediaPlayer", "CoreMedia", "WebKit", "Accelerate", "CoreLocation", "AVKit", "MessageUI", "QuickLook", "AudioToolBox", "AddressBook"]
  #   ss.libraries =  ["z", "resolv.9", "sqlite3", "c++", "c++abi"]
  #   ss.vendored_frameworks = 'SDK/YFAdsKSAdapter.framework'

  # end

  # s.subspec 'YFAdsJDAdapter' do |ss|
  #   ss.dependency 'JADYun'
  #   ss.dependency 'YFAds/YFAdsSDK'
  #   ss.vendored_frameworks = 'SDK/YFAdsJDAdapter.framework'
  # end


 
  # s.ios.vendored_framework   = 'SDK/YFAdsSDK.framework'
  s.xcconfig = {
      'VALID_ARCHS' =>  valid_archs.join(' '),
  }

end


