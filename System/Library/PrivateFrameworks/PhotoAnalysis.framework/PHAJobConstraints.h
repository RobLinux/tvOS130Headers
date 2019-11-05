/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <PhotoAnalysis/NSCopying.h>

@interface PHAJobConstraints : NSObject <NSCopying> {

	BOOL _canRunAutomaticBackgroundAnalysis;
	BOOL _canRunAutomaticForegroundAnalysis;
	BOOL _canRunUserInitiatedForegroundAnalysis;
	BOOL _canUseNetwork;
	BOOL _turboMode;
	BOOL _cancelsTurboMode;

}

@property (assign,getter=isTurboMode,nonatomic) BOOL turboMode;                         //@synthesize turboMode=_turboMode - In the implementation block
@property (assign,nonatomic) BOOL cancelsTurboMode;                                     //@synthesize cancelsTurboMode=_cancelsTurboMode - In the implementation block
@property (nonatomic,readonly) BOOL canRunAutomaticBackgroundAnalysis;                  //@synthesize canRunAutomaticBackgroundAnalysis=_canRunAutomaticBackgroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canRunAutomaticForegroundAnalysis;                  //@synthesize canRunAutomaticForegroundAnalysis=_canRunAutomaticForegroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canRunUserInitiatedForegroundAnalysis;              //@synthesize canRunUserInitiatedForegroundAnalysis=_canRunUserInitiatedForegroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canUseNetwork;                                      //@synthesize canUseNetwork=_canUseNetwork - In the implementation block
+(id)constraintsWithNoAllowances;
+(id)constraintsWithAllAllowances;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)arg1 canRunAutomaticForegroundAnalysis:(BOOL)arg2 canRunUserInitiatedForegroundAnalysis:(BOOL)arg3 canUseNetwork:(BOOL)arg4 ;
-(id)initFromBitString:(id)arg1 ;
-(id)asBitString;
-(void)applyConstraints:(id)arg1 usingMask:(id)arg2 ;
-(BOOL)isEqualToConstraints:(id)arg1 ;
-(unsigned)qosClassForProcessing;
-(id)statusAsDictionary;
-(BOOL)canRunAutomaticBackgroundAnalysis;
-(BOOL)canRunAutomaticForegroundAnalysis;
-(BOOL)canRunUserInitiatedForegroundAnalysis;
-(BOOL)canUseNetwork;
-(BOOL)isTurboMode;
-(void)setTurboMode:(BOOL)arg1 ;
-(BOOL)cancelsTurboMode;
-(void)setCancelsTurboMode:(BOOL)arg1 ;
@end

