/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber;

@interface QRStreamInfo : NSObject {

	NSArray* _publishedStreams;
	NSArray* _subscribedStreams;
	NSNumber* _generationCounter;
	NSNumber* _maxConcurrentStreams;

}
-(id)initQRStreamInfo:(id)arg1 subscribedStreams:(id)arg2 generationCounter:(id)arg3 maxConcurrentStreams:(id)arg4 ;
@end
