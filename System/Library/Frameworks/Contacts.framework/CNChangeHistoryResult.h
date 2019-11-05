/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/NSSecureCoding.h>

@class CNChangeHistoryAnchor, NSArray;

@interface CNChangeHistoryResult : NSObject <NSSecureCoding> {

	BOOL _changesTruncated;
	BOOL _unifyResults;
	CNChangeHistoryAnchor* _latestChangeAnchor;
	NSArray* _contactChanges;
	NSArray* _groupChanges;
	NSArray* _labeledValueChanges;

}

@property (assign,nonatomic) BOOL changesTruncated;                                   //@synthesize changesTruncated=_changesTruncated - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * latestChangeAnchor;              //@synthesize latestChangeAnchor=_latestChangeAnchor - In the implementation block
@property (nonatomic,retain) NSArray * contactChanges;                                //@synthesize contactChanges=_contactChanges - In the implementation block
@property (nonatomic,retain) NSArray * groupChanges;                                  //@synthesize groupChanges=_groupChanges - In the implementation block
@property (nonatomic,retain) NSArray * labeledValueChanges;                           //@synthesize labeledValueChanges=_labeledValueChanges - In the implementation block
@property (assign,nonatomic) BOOL unifyResults;                                       //@synthesize unifyResults=_unifyResults - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)enumerateEnumerator:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)unifyResults;
-(void)setUnifyResults:(BOOL)arg1 ;
-(CNChangeHistoryAnchor *)latestChangeAnchor;
-(id)contactChangesEnumeratorWithKeysToFetch:(id)arg1 contactStore:(id)arg2 ;
-(id)groupChangesEnumeratorWithContactStore:(id)arg1 ;
-(void)setChangesTruncated:(BOOL)arg1 ;
-(BOOL)changesTruncated;
-(void)setLatestChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(void)setContactChanges:(NSArray *)arg1 ;
-(void)setGroupChanges:(NSArray *)arg1 ;
-(void)setLabeledValueChanges:(NSArray *)arg1 ;
-(NSArray *)contactChanges;
-(NSArray *)groupChanges;
-(NSArray *)labeledValueChanges;
-(BOOL)enumerateContactChangesWithKeysToFetch:(id)arg1 fromContactStore:(id)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(BOOL)enumerateGroupChangesFromContactStore:(id)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)labeledValueChangesEnumeratorWithContactStore:(id)arg1 ;
@end
