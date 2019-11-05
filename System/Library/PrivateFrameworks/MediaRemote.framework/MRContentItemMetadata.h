/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <MediaRemote/_MRContentItemMetadataProtobuf.h>

@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSDictionary, NSDate, NSArray;

@interface MRContentItemMetadata : _MRContentItemMetadataProtobuf {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSURL* _assetURL;
	NSDictionary* _userInfo;
	NSDictionary* _appMetrics;
	NSDictionary* _nowPlayingInfo;
	NSDictionary* _collectionInfo;
	NSDate* _currentPlaybackDate;
	NSDictionary* _deviceSpecificUserInfo;
	NSArray* _artworkURLTemplates;

}

@property (nonatomic,copy) NSURL * assetURL; 
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (nonatomic,copy) NSDictionary * deviceSpecificUserInfo; 
@property (nonatomic,copy) NSDictionary * collectionInfo; 
@property (nonatomic,copy) NSDictionary * appMetrics; 
@property (nonatomic,copy) NSDictionary * nowPlayingInfo; 
@property (nonatomic,copy) NSDate * currentPlaybackDate; 
@property (nonatomic,copy) NSArray * artworkURLTemplates;                      //@synthesize artworkURLTemplates=_artworkURLTemplates - In the implementation block
+(void)initialize;
-(id)dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSDictionary *)userInfo;
-(id)initWithData:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSURL *)assetURL;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(id)customDictionaryRepresentation;
-(NSDate *)currentPlaybackDate;
-(void)setCurrentPlaybackDate:(NSDate *)arg1 ;
-(NSArray *)artworkURLTemplates;
-(void)setArtworkURLTemplates:(NSArray *)arg1 ;
-(NSDictionary *)appMetrics;
-(void)setAppMetrics:(NSDictionary *)arg1 ;
-(NSDictionary *)collectionInfo;
-(void)setCollectionInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)deviceSpecificUserInfo;
-(void)setDeviceSpecificUserInfo:(NSDictionary *)arg1 ;
@end

