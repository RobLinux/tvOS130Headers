/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/PlugIns/SystemCameraExtension.appex/SystemCameraExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountMailExtension/RMExtensionConfigurationApplicator.h>

@class SystemCameraAdapter, NSString;

@interface SystemCameraApplicator : NSObject <RMExtensionConfigurationApplicator> {

	SystemCameraAdapter* _adapter;

}

@property (nonatomic,readonly) SystemCameraAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(SystemCameraAdapter *)adapter;
-(id)initWithAdapter:(id)arg1 ;
-(void)applyNewConfigurations:(id)arg1 updatedConfigurations:(id)arg2 removedPolicyKeys:(id)arg3 policyStore:(id)arg4 assetResolver:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
@end

