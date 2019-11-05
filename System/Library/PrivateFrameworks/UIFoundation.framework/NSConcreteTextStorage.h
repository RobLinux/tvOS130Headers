/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage {

	NSConcreteNotifyingMutableAttributedString* _contents;
	opaque_pthread_rwlock_t _lock;
	struct {
		unsigned _forceFixAttributes : 1;
		unsigned _needLock : 1;
		unsigned _lockInitialized : 1;
		unsigned _inFixingAttributes : 1;
		unsigned _reserved : 28;
	}  _pFlags;

}
+(unsigned long long)_writerCountTSDKey;
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)string;
-(id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(NSRange*)arg3 ;
-(id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(Class)classForCoder;
-(id)initWithString:(id)arg1 ;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(BOOL)_lockForReading;
-(void)_unlock;
-(void)_setForceFixAttributes:(BOOL)arg1 ;
-(BOOL)_attributeFixingInProgress;
-(void)_setAttributeFixingInProgress:(BOOL)arg1 ;
-(BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg1 ;
-(BOOL)fixesAttributesLazily;
-(BOOL)_forceFixAttributes;
-(void)_initLocks;
@end

