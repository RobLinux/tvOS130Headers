/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface OBAnalyticsManager : NSObject {

	BOOL _shouldStashMetrics;
	NSMutableArray* _stagedMetrics;

}

@property (retain) NSMutableArray * stagedMetrics;              //@synthesize stagedMetrics=_stagedMetrics - In the implementation block
@property (assign) BOOL shouldStashMetrics;                     //@synthesize shouldStashMetrics=_shouldStashMetrics - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)commit;
-(void)logPresentationOfPrivacySplashWithIdentifier:(id)arg1 ;
-(void)logPresentationOfPrivacyLinkWithIdentifier:(id)arg1 ;
-(void)logTapOnPrivacyLinkWithIdentifier:(id)arg1 ;
-(void)setStagedMetrics:(NSMutableArray *)arg1 ;
-(NSMutableArray *)stagedMetrics;
-(BOOL)shouldStashMetrics;
-(void)stageMetricID:(unsigned)arg1 metric:(id)arg2 ;
-(void)postMetricID:(unsigned)arg1 metric:(id)arg2 ;
-(void)logPresentationOfPrivacyUnifiedAbout;
-(void)setShouldStashMetrics:(BOOL)arg1 ;
@end

