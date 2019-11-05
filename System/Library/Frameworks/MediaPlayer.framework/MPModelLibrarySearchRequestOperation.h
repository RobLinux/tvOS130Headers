/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPModelLibrarySearchRequest;

@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	shared_ptr<mlcore::LocalizedSearchQuery>* _runningQuery;
	MPModelLibrarySearchRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibrarySearchRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                 //@synthesize responseHandler=_responseHandler - In the implementation block
-(id)init;
-(MPModelLibrarySearchRequest *)request;
-(void)setRequest:(MPModelLibrarySearchRequest *)arg1 ;
-(void)cancel;
-(void)execute;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
@end

