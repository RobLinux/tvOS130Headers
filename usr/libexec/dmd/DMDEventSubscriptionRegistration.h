/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:35 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class DMDPayloadMetadata, NSArray, CEMEventSubscriptionDeclaration_Schedule;

@interface DMDEventSubscriptionRegistration : NSManagedObject

@property (nonatomic,retain) DMDPayloadMetadata * payloadMetadata; 
@property (nonatomic,retain) NSArray * events; 
@property (nonatomic,retain) CEMEventSubscriptionDeclaration_Schedule * schedule; 
+(id)fetchRequestMatchingRegistrationFromOrganizationWithIdentifier:(id)arg1 payloadIdentifier:(id)arg2 ;
+(BOOL)automaticallyNotifiesObserversOfPayloadMetadata;
-(id)identifier;
-(void)setPayloadMetadata:(DMDPayloadMetadata *)arg1 ;
@end

