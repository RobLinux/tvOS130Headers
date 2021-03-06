/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
#import <AddressBookLegacy/ABPredicate.h>

@interface ABAnyValuePredicate : ABPredicate {

	int _property;

}

@property (assign,nonatomic) int property;              //@synthesize property=_property - In the implementation block
-(id)init;
-(BOOL)isValid;
-(int)property;
-(void)setProperty:(int)arg1 ;
-(id)queryWhereStringForPredicateIdentifier:(int)arg1 ;
-(void)ab_bindWhereClauseComponentOfStatement:(CPSqliteStatement*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3 ;
-(id)queryJoinsInCompound:(BOOL)arg1 predicateIdentifier:(int)arg2 ;
-(id)queryGroupByProperties;
@end

