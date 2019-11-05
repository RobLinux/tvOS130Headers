/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSSQLiteEntity.h>

@class NSArray, MediaSocialPostEntity;

@interface DirectUploadEntity : SSSQLiteEntity

@property (nonatomic,readonly) NSArray * artists; 
@property (nonatomic,readonly) MediaSocialPostEntity * postEntity; 
+(id)databaseTable;
+(id)newEntityValuesWithMediaSocialAttachment:(id)arg1 ;
-(BOOL)deleteFromDatabase;
-(NSArray *)artists;
-(long long)setFailedWithError:(id)arg1 ;
-(MediaSocialPostEntity *)postEntity;
-(void)setProcessingWithResponse:(id)arg1 ;
-(void)resetStatusProperties;
-(id)insertEntitiesForArtists:(id)arg1 withProperties:(id)arg2 ;
-(void)deleteAssetFile;
@end

