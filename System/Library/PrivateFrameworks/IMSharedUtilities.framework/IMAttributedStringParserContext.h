/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSAttributedString, NSString, NSArray;

@interface IMAttributedStringParserContext : NSObject {

	NSAttributedString* _inString;

}

@property (retain,readonly) NSAttributedString * inString;              //@synthesize inString=_inString - In the implementation block
@property (retain,readonly) NSString * name; 
@property (retain,readonly) NSArray * resultsForLogging; 
@property (readonly) BOOL shouldPreprocess; 
-(NSString *)name;
-(void)dealloc;
-(id)initWithAttributedString:(id)arg1 ;
-(void)parserDidStart:(id)arg1 ;
-(NSArray *)resultsForLogging;
-(NSAttributedString *)inString;
-(void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(NSRange)arg3 ;
-(id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(NSRange)arg3 ;
-(BOOL)shouldPreprocess;
-(void)parserDidEnd:(id)arg1 ;
@end

