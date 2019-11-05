/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Seeding.framework/Seeding
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface SDBetaManager : NSObject {

	NSArray* _cachedPrograms;

}

@property (nonatomic,retain) NSArray * cachedPrograms;              //@synthesize cachedPrograms=_cachedPrograms - In the implementation block
+(id)sharedManager;
-(id)_assetServerURLString;
-(id)_brainServerURLString;
-(void)_fixupMobileAssetAudience;
-(NSArray *)cachedPrograms;
-(void)setCachedPrograms:(NSArray *)arg1 ;
-(void)_setAssetServerURLString:(id)arg1 ;
-(void)_setBrainServerURLString:(id)arg1 ;
-(void)_setAssetAudienceString:(id)arg1 ;
-(BOOL)isEnrolledInBetaProgram;
-(void)_resetAssetAudience;
-(BOOL)unenrollFromBetaProgram;
-(void)verifyCatalog:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)verifyURLForCatalog:(id)arg1 ;
-(id)membershipURL;
-(void)saveResponse:(id)arg1 ;
-(id)serverURLWithPath:(id)arg1 arguments:(id)arg2 ;
-(BOOL)_hasFixedMAABefore;
-(void)_setHasFixedMAA;
-(id)availableBetaPrograms;
-(void)clearCachedPrograms;
-(BOOL)enrollInBetaProgram:(id)arg1 ;
-(void)declinedLegal;
-(void)verifyCurrentCatalog;
-(void)queryProgramsForSystemAccountsWithCompletion:(/*^block*/id)arg1 ;
@end
