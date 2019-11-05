/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:39 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKPlayerListReaderDelegate.h>
#import <gamed/GKDataReader.h>

@class GKPlayerListReader, NSString;

@interface GKFriendsReader : NSObject <GKPlayerListReaderDelegate, GKDataReader> {

	BOOL _shouldFilter;
	GKPlayerListReader* _listReader;
	NSString* _localPlayerID;

}

@property (nonatomic,retain) GKPlayerListReader * listReader;              //@synthesize listReader=_listReader - In the implementation block
@property (nonatomic,retain) NSString * localPlayerID;                     //@synthesize localPlayerID=_localPlayerID - In the implementation block
@property (assign,nonatomic) BOOL shouldFilter;                            //@synthesize shouldFilter=_shouldFilter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readerWithReaderConnection:(id)arg1 writerConnection:(id)arg2 transport:(id)arg3 localPlayer:(id)arg4 filterFriendsInCommon:(BOOL)arg5 ;
-(void)dealloc;
-(void)setLocalPlayerID:(NSString *)arg1 ;
-(NSString *)localPlayerID;
-(void)setListReader:(GKPlayerListReader *)arg1 ;
-(void)readResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)listCacheReaderWithLanguage:(id)arg1 connection:(id)arg2 ;
-(id)listNetworkReaderWithTransport:(id)arg1 cachedListResponse:(id)arg2 ;
-(id)listCacheWriterWithLanguage:(id)arg1 connection:(id)arg2 ;
-(id)mergeNetworkLoadedProfileResources:(id)arg1 withSparseListResources:(id)arg2 ;
-(int)familiarityForProfileLoadWithRelativePlayer:(id)arg1 ;
-(id)localPlayerForLoadingProfileRelativeToPlayer:(id)arg1 ;
-(GKPlayerListReader *)listReader;
-(BOOL)shouldFilter;
-(void)setShouldFilter:(BOOL)arg1 ;
-(id)initWithReaderConnection:(id)arg1 writerConnection:(id)arg2 transport:(id)arg3 localPlayer:(id)arg4 filterFriendsInCommon:(BOOL)arg5 ;
@end

