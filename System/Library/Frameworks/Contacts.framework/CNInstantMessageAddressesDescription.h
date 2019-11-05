/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/CNCompoundMultiValuePropertyDescription.h>
#import <Contacts/CNAbstractPropertyDescription.h>

@class NSString;

@interface CNInstantMessageAddressesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)absPropertyType;
-(BOOL)absPropertyID:(int*)arg1 ;
-(/*^block*/id)ABSMultiValueLabeledValueFromCNLabeledValueTransform;
-(/*^block*/id)CNLabeledValueFromABSMultiValueTranform;
-(id)init;
-(void*)ABMultiValueValueFromCNLabeledValueValue:(id)arg1 ;
-(BOOL)isNonnull;
-(id)CNValueForContact:(id)arg1 ;
-(BOOL)isEqualForContact:(id)arg1 other:(id)arg2 ;
-(void)encodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)decodeUsingCoder:(id)arg1 contact:(id)arg2 ;
-(void)setCNValue:(id)arg1 onContact:(id)arg2 ;
-(BOOL)canUnifyValue:(id)arg1 withValue:(id)arg2 ;
-(Class)labeledValueClass;
-(/*^block*/id)dictionaryTransform;
-(/*^block*/id)fromDictionaryTransform;
-(id)summarizationKeys;
-(BOOL)abPropertyID:(int*)arg1 ;
-(id)CNLabeledValueValueFromABMultiValueValue:(void*)arg1 ;
@end

