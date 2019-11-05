/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSNumber, NSString, NSURL;

@interface SagaUploadPlaylistArtworkOperation : CloudLibraryOperation {

	long long _playlistPersistentID;
	NSNumber* _dsid;
	NSString* _cuid;
	NSString* _troveID;
	NSString* _userArtworkToken;
	NSNumber* _containerCloudID;
	NSURL* _assetURL;
	unsigned long long _assetFileSize;

}

@property (assign,nonatomic) long long playlistPersistentID;                //@synthesize playlistPersistentID=_playlistPersistentID - In the implementation block
@property (nonatomic,retain) NSNumber * dsid;                               //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * cuid;                               //@synthesize cuid=_cuid - In the implementation block
@property (nonatomic,retain) NSString * troveID;                            //@synthesize troveID=_troveID - In the implementation block
@property (nonatomic,retain) NSString * userArtworkToken;                   //@synthesize userArtworkToken=_userArtworkToken - In the implementation block
@property (nonatomic,retain) NSNumber * containerCloudID;                   //@synthesize containerCloudID=_containerCloudID - In the implementation block
@property (nonatomic,retain) NSURL * assetURL;                              //@synthesize assetURL=_assetURL - In the implementation block
@property (assign,nonatomic) unsigned long long assetFileSize;              //@synthesize assetFileSize=_assetFileSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)main;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(BOOL)isPersistent;
-(NSURL *)assetURL;
-(void)setAssetURL:(NSURL *)arg1 ;
-(void)setPlaylistPersistentID:(long long)arg1 ;
-(long long)playlistPersistentID;
-(id)initWithConfiguration:(id)arg1 playlistPersistentID:(long long)arg2 ;
-(NSString *)cuid;
-(void)setCuid:(NSString *)arg1 ;
-(NSString *)troveID;
-(void)setTroveID:(NSString *)arg1 ;
-(void)setContainerCloudID:(NSNumber *)arg1 ;
-(NSNumber *)containerCloudID;
-(void)setUserArtworkToken:(NSString *)arg1 ;
-(NSString *)userArtworkToken;
-(void)setAssetFileSize:(unsigned long long)arg1 ;
-(unsigned long long)assetFileSize;
-(void)_initiateArtworkUpload;
-(id)_requestWithURL:(id)arg1 URLBagKey:(id)arg2 timeoutInterval:(double)arg3 additionalBodyFields:(id)arg4 ;
-(id)_responseBodyForRequest:(id)arg1 retryTimeout:(double)arg2 debugName:(id)arg3 ;
-(void)_downloadRequestsFromURL:(id)arg1 uploadResponsesURL:(id)arg2 ;
-(void)_uploadArtworkAssetWithInfo:(id)arg1 uploadResponsesURL:(id)arg2 uploadResponseData:(id)arg3 postUploadBackOffDelay:(unsigned)arg4 followupDownloadRequestsURL:(id)arg5 ;
-(void)_uploadArtworkAssetWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_bodyDataWithAdditionalBodyFields:(id)arg1 ;
-(id)_standardBodyDictionaryWithAdditionalFields:(id)arg1 ;
-(id)initWithPlaylistPersistentID:(long long)arg1 ;
@end

