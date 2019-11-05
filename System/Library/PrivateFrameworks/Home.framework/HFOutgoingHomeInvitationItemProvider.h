/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFOutgoingHomeInvitationItemProvider : HFItemProvider {

	/*^block*/id _filter;
	HMHome* _home;
	NSMutableSet* _outgoingInvites;

}

@property (nonatomic,retain) NSMutableSet * outgoingInvites;              //@synthesize outgoingInvites=_outgoingInvites - In the implementation block
@property (nonatomic,copy) id filter;                                     //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                             //@synthesize home=_home - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)items;
-(id)filter;
-(void)setFilter:(id)arg1 ;
-(HMHome *)home;
-(id)initWithHome:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(NSMutableSet *)outgoingInvites;
-(void)setOutgoingInvites:(NSMutableSet *)arg1 ;
@end

