/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, GKDiscoveryBonjour;

@interface GKDiscoveryBonjourResolveContainer : NSObject {

	NSMutableArray* _serviceRefList;
	GKDiscoveryBonjour* _context;
	/*^block*/id _resolveCompletionHandler;

}

@property (nonatomic,retain) NSMutableArray * serviceRefList;              //@synthesize serviceRefList=_serviceRefList - In the implementation block
@property (assign,nonatomic) GKDiscoveryBonjour * context;                 //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id resolveCompletionHandler;                    //@synthesize resolveCompletionHandler=_resolveCompletionHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(GKDiscoveryBonjour *)context;
-(void)setContext:(GKDiscoveryBonjour *)arg1 ;
-(void)setResolveCompletionHandler:(id)arg1 ;
-(id)resolveCompletionHandler;
-(NSMutableArray *)serviceRefList;
-(void)setServiceRefList:(NSMutableArray *)arg1 ;
@end

