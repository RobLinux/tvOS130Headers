/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:10 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSOrderedSet, HBItemOrderVideoSubscriberApplicationConfiguration;

@interface HBItemOrderPolicy : NSObject {

	NSArray* _orderingRules;
	NSOrderedSet* _provisionedBundleIdentifiers;
	HBItemOrderVideoSubscriberApplicationConfiguration* _videoSubscriberApplicationConfiguration;

}

@property (nonatomic,readonly) NSOrderedSet * provisionedBundleIdentifiers;                                                               //@synthesize provisionedBundleIdentifiers=_provisionedBundleIdentifiers - In the implementation block
@property (nonatomic,readonly) HBItemOrderVideoSubscriberApplicationConfiguration * videoSubscriberApplicationConfiguration;              //@synthesize videoSubscriberApplicationConfiguration=_videoSubscriberApplicationConfiguration - In the implementation block
@property (nonatomic,readonly) NSArray * orderingRules;                                                                                   //@synthesize orderingRules=_orderingRules - In the implementation block
+(id)insertIndexes:(id)arg1 intoIndexSet:(id)arg2 ;
+(void)updateItemOrderIds:(id)arg1 atIndexes:(id)arg2 ;
+(void)updateItemOrderIds:(id)arg1 atIndexes:(id)arg2 baseOrderId:(double)arg3 ;
+(id)itemsByAddingApplications:(id)arg1 toItems:(id)arg2 provisionedBundleIdentifiers:(id)arg3 videoSubscriberApplicationBundleIdentifier:(id)arg4 videoSubscriberApplicationPosition:(unsigned long long)arg5 didAddVideoSubscriberApplication:(BOOL*)arg6 ;
-(NSOrderedSet *)provisionedBundleIdentifiers;
-(id)initWithProvisionedBundleIdentifiers:(id)arg1 videoSubscriberApplicationConfiguration:(id)arg2 ;
-(id)updatedItemOrderingByAddingApplications:(id)arg1 toItems:(id)arg2 didAddVideoSubscriberApplication:(BOOL*)arg3 ;
-(id)applicationsGroupedByOrderingRules:(id)arg1 defaultRule:(id)arg2 ;
-(NSArray *)orderingRules;
-(HBItemOrderVideoSubscriberApplicationConfiguration *)videoSubscriberApplicationConfiguration;
@end

