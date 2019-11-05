/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContactStore, NSArray;

@interface _PSContactResolver : NSObject {

	CNContactStore* _contactStore;
	NSArray* _keysToFetch;

}

@property (nonatomic,readonly) CNContactStore * contactStore;              //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch;                      //@synthesize keysToFetch=_keysToFetch - In the implementation block
-(id)resolveContactIfPossibleFromContactIdentifierString:(id)arg1 ;
-(NSArray *)keysToFetch;
-(id)contactWithIdentifier:(id)arg1 ;
-(CNContactStore *)contactStore;
-(id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2 ;
-(id)allEmailAndPhoneNumberHandlesForContact:(id)arg1 ;
-(id)resolveContact:(id)arg1 ;
-(id)resolveContactFromINPerson:(id)arg1 ;
-(id)resolveContactIdentifier:(id)arg1 ;
@end

