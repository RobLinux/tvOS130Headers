/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSession;

@interface AAUIImageFetcher : NSObject {

	NSURLSession* _urlSession;

}
+(id)sharedImageFetcher;
-(id)_urlSession;
-(void)fetchImageAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

