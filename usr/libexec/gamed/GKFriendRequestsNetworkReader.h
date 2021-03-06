/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKDataReader.h>

@class GKDataTransport, NSString;

@interface GKFriendRequestsNetworkReader : NSObject <GKDataReader> {

	GKDataTransport* _transport;

}

@property (nonatomic,retain) GKDataTransport * transport;              //@synthesize transport=_transport - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readerWithTransport:(id)arg1 ;
-(void)dealloc;
-(GKDataTransport *)transport;
-(void)setTransport:(GKDataTransport *)arg1 ;
-(id)initWithTransport:(id)arg1 ;
-(void)readResources:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)poolName;
-(id)friendRequestForRepresentation:(id)arg1 ;
@end

