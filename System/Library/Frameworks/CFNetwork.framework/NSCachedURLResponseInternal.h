/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@class NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponseInternal : NSObject {

	NSURLResponse* response;
	NSData* data;
	NSDictionary* userInfo;
	unsigned long long storagePolicy;
	CFCachedURLResponse* _cachedURLResponse;

}
-(void)dealloc;
@end

