/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:46:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.MobileInstallationHelperService/MIContainer.h>

@interface MIDataContainer : MIContainer {

	int _contentProtectionClass;

}

@property (assign,nonatomic) int contentProtectionClass;              //@synthesize contentProtectionClass=_contentProtectionClass - In the implementation block
+(id)dataContainerForExecutableBundle:(id)arg1 createIfNeeded:(BOOL)arg2 temporary:(BOOL)arg3 created:(BOOL*)arg4 error:(id*)arg5 ;
-(int)contentProtectionClass;
-(void)setContentProtectionClass:(int)arg1 ;
@end

