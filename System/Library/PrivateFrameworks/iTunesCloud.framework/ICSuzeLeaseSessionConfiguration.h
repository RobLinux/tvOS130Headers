/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <iTunesCloud/NSCopying.h>

@class ICStoreRequestContext;

@interface ICSuzeLeaseSessionConfiguration : NSObject <NSCopying> {

	id _leaseID;
	long long _mediaType;
	ICStoreRequestContext* _requestContext;

}

@property (nonatomic,readonly) id leaseID;                                               //@synthesize leaseID=_leaseID - In the implementation block
@property (nonatomic,readonly) long long mediaType;                                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)mediaType;
-(ICStoreRequestContext *)requestContext;
-(id)leaseID;
-(id)initWithRequestContext:(id)arg1 leaseID:(id)arg2 mediaType:(long long)arg3 ;
@end

