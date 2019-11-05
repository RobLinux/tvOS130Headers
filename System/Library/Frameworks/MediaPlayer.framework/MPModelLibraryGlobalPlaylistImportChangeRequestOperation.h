/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class NSString, MPMediaLibrary;

@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MPAsyncOperation {

	BOOL _shouldLibraryAdd;
	NSString* _globalPlaylistID;
	MPMediaLibrary* _mediaLibrary;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSString * globalPlaylistID;                  //@synthesize globalPlaylistID=_globalPlaylistID - In the implementation block
@property (nonatomic,retain) MPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (assign,nonatomic) BOOL shouldLibraryAdd;                      //@synthesize shouldLibraryAdd=_shouldLibraryAdd - In the implementation block
@property (nonatomic,copy) id responseHandler;                           //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(NSString *)globalPlaylistID;
-(void)setGlobalPlaylistID:(NSString *)arg1 ;
-(MPMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(MPMediaLibrary *)arg1 ;
-(BOOL)shouldLibraryAdd;
-(void)setShouldLibraryAdd:(BOOL)arg1 ;
@end

