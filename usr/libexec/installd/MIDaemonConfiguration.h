/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileInstallation/MIGlobalConfiguration.h>

@interface MIDaemonConfiguration : MIGlobalConfiguration {

	BOOL _codeSigningEnforcementIsDisabled;
	BOOL _isInternalImageType;
	BOOL _skipDeviceFamilyCheck;
	BOOL _skipThinningCheck;
	BOOL _allowPatchWithoutSinf;
	unsigned _installQOSOverride;
	long long _nSimultaneousInstallations;

}

@property (nonatomic,readonly) unsigned installQOSOverride;                             //@synthesize installQOSOverride=_installQOSOverride - In the implementation block
@property (nonatomic,readonly) BOOL skipDeviceFamilyCheck;                              //@synthesize skipDeviceFamilyCheck=_skipDeviceFamilyCheck - In the implementation block
@property (nonatomic,readonly) BOOL skipThinningCheck;                                  //@synthesize skipThinningCheck=_skipThinningCheck - In the implementation block
@property (nonatomic,readonly) BOOL allowPatchWithoutSinf;                              //@synthesize allowPatchWithoutSinf=_allowPatchWithoutSinf - In the implementation block
@property (nonatomic,readonly) BOOL codeSigningEnforcementIsDisabled;                   //@synthesize codeSigningEnforcementIsDisabled=_codeSigningEnforcementIsDisabled - In the implementation block
@property (nonatomic,readonly) BOOL isInternalImageType;                                //@synthesize isInternalImageType=_isInternalImageType - In the implementation block
@property (nonatomic,readonly) long long nSimultaneousInstallations;                    //@synthesize nSimultaneousInstallations=_nSimultaneousInstallations - In the implementation block
@property (assign,nonatomic) BOOL haveUpdatedPluginContainersWithParentID; 
+(id)sharedInstance;
-(id)init;
-(BOOL)codeSigningEnforcementIsDisabled;
-(BOOL)isInternalImageType;
-(BOOL)haveUpdatedPluginContainersWithParentID;
-(void)setHaveUpdatedPluginContainersWithParentID:(BOOL)arg1 ;
-(unsigned)installQOSOverride;
-(BOOL)skipDeviceFamilyCheck;
-(BOOL)skipThinningCheck;
-(BOOL)allowPatchWithoutSinf;
-(long long)nSimultaneousInstallations;
@end

