/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/_DKObject.h>

@class NSString, _DKObject;

@interface _DKRelation : _DKObject {

	NSString* _verbPhrase;
	_DKObject* _subject;
	_DKObject* _object;

}

@property (readonly) NSString * verbPhrase;              //@synthesize verbPhrase=_verbPhrase - In the implementation block
@property (readonly) _DKObject * subject;                //@synthesize subject=_subject - In the implementation block
@property (readonly) _DKObject * object;                 //@synthesize object=_object - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3 ;
+(id)relationWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3 ;
-(id)description;
-(_DKObject *)object;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(_DKObject *)subject;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(NSString *)verbPhrase;
-(id)initWithSubject:(id)arg1 verbPhrase:(id)arg2 object:(id)arg3 ;
@end

