/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelLibraryAlbumAppDataChangeRequest;

@interface MPModelLibraryAlbumAppDataChangeRequestOperation : MPAsyncOperation {

	/*^block*/id _responseHandler;
	MPModelLibraryAlbumAppDataChangeRequest* _request;

}

@property (nonatomic,copy) id responseHandler;                                             //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,copy) MPModelLibraryAlbumAppDataChangeRequest * request;              //@synthesize request=_request - In the implementation block
-(MPModelLibraryAlbumAppDataChangeRequest *)request;
-(void)setRequest:(MPModelLibraryAlbumAppDataChangeRequest *)arg1 ;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
@end

