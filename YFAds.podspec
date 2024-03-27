Pod::Spec.new do |s|
  s.name = "YFAds"
  s.version = "5.3.3.1-bate"
  s.summary = "iOS YFAdsSDK"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.authors = {"yifan"=>"576661787@qq.com"}
  s.homepage = "http://www.yifan.com/"
  s.description = "YFAds"
  s.requires_arc = true
  s.source  = { :git => "https://github.com/com-yifan/yf-ios.git", :tag => "#{s.version}" }
  valid_archs = ['i386', 'armv7', 'x86_64', 'arm64']
   s.pod_target_xcconfig = {'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'x86_64 arm64' }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'x86_64 arm64' }
  # s.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO'}
  # s.user_target_xcconfig = { 'ENABLE_BITCODE' => 'NO'}


  s.default_subspecs = 'YFAdsSDK'

  s.subspec 'YFAdsSDK' do |ss|
    ss.ios.deployment_target = '9.0'
    ss.vendored_frameworks = 'SDK/YFAdsSDK.framework'
    ss.resource = 'SDK/YFAdsSDK.bundle'
  end
  
  s.subspec 'YFAdsCSJAdapter' do |ss|
    ss.dependency 'Ads-CN'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'YFAds/YFAdsSDK'
    ss.vendored_frameworks = 'SDK/YFAdsCSJAdapter.framework'
  end

  s.subspec 'YFAdsGDTAdapter' do |ss|
    ss.dependency 'GDTMobSDK'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'YFAds/YFAdsSDK'
    ss.vendored_frameworks = 'SDK/YFAdsGDTAdapter.framework'
  end

  s.subspec 'YFAdsKSAdapter' do |ss|
    ss.dependency 'KSAdSDK'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'YFAds/YFAdsSDK'
    ss.vendored_frameworks = 'SDK/YFAdsKSAdapter.framework'
  end

  s.subspec 'YFAdsJDAdapter' do |ss|
    ss.dependency 'JADYun'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'YFAds/YFAdsSDK'
    ss.vendored_frameworks = 'SDK/YFAdsKSAdapter.framework'
  end

   s.subspec 'YFAdsBDAdapter' do |ss|
    ss.dependency 'BaiduMobAdSDK'
    ss.ios.deployment_target = '9.0'
    ss.dependency 'YFAds/YFAdsSDK'
    ss.vendored_frameworks = 'SDK/YFAdsBDAdapter.framework'
  end

 
  s.ios.deployment_target    = '11.0'
  # s.ios.vendored_framework   = 'SDK/YFAdsSDK.framework'
  s.xcconfig = {
      'VALID_ARCHS' =>  valid_archs.join(' '),
  }

end


