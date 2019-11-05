/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUSearchResult.h>

@class TUSearchController, NSString, CNContact, NSArray;

@interface TUAdhocResult : NSObject <TUSearchResult> {

	TUSearchController* _searchController;
	NSString* _value;

}

@property (nonatomic,retain) NSString * value;                         //@synthesize value=_value - In the implementation block
@property (__weak) TUSearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * displayName; 
@property (readonly) NSString * callerId; 
@property (readonly) CNContact * backingContact; 
@property (readonly) NSString * backingContactId; 
@property (readonly) NSString * backingContactIdentifier; 
@property (readonly) NSString * destinationId; 
@property (readonly) NSString * isoCountryCode; 
@property (readonly) NSArray * handles; 
@property (readonly) long long mostRecentCallType; 
@property (readonly) BOOL mostRecentCallWasMissed; 
@property (readonly) NSArray * idsCanonicalDestinations; 
-(id)initWithString:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSArray *)handles;
-(NSString *)isoCountryCode;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(NSString *)callerId;
-(CNContact *)backingContact;
-(long long)mostRecentCallType;
-(NSString *)destinationId;
-(NSString *)backingContactId;
-(NSString *)backingContactIdentifier;
-(BOOL)mostRecentCallWasMissed;
-(NSArray *)idsCanonicalDestinations;
@end

