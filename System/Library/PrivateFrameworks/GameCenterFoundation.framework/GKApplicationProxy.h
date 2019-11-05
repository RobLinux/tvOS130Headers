/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSApplicationProxy, NSDictionary, NSBundle, NSString, NSNumber, NSDate;

@interface GKApplicationProxy : NSObject {

	LSApplicationProxy* _lsProxy;
	NSDictionary* _metadata;

}

@property (nonatomic,retain) LSApplicationProxy * lsProxy;                                     //@synthesize lsProxy=_lsProxy - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain,readonly) NSBundle * bundle; 
@property (nonatomic,retain,readonly) NSString * bundleVersion; 
@property (nonatomic,retain,readonly) NSString * bundleShortVersion; 
@property (nonatomic,retain,readonly) NSString * bundleID; 
@property (nonatomic,retain,readonly) NSNumber * adamID; 
@property (nonatomic,retain,readonly) NSNumber * externalVersion; 
@property (nonatomic,retain,readonly) NSDate * purchaseDate; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
+(id)metadataForBundleURL:(id)arg1 ;
-(void)dealloc;
-(NSString *)bundleID;
-(id)bundleURL;
-(NSBundle *)bundle;
-(NSDictionary *)metadata;
-(BOOL)isRestricted;
-(NSString *)bundleVersion;
-(BOOL)isInstalled;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSNumber *)adamID;
-(NSDate *)purchaseDate;
-(BOOL)isGameCenterEnabled;
-(id)initWithBundleID:(id)arg1 ;
-(NSString *)bundleShortVersion;
-(NSNumber *)externalVersion;
-(void)setLsProxy:(LSApplicationProxy *)arg1 ;
-(id)initWithProxy:(id)arg1 ;
-(LSApplicationProxy *)lsProxy;
@end

