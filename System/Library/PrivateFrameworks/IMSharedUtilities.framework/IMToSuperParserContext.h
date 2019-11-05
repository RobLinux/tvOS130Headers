/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMXMLParserContext.h>

@class NSMutableArray, NSMutableDictionary, NSMutableAttributedString, NSString, NSAttributedString, NSArray;

@interface IMToSuperParserContext : IMXMLParserContext {

	unsigned long long _underlineCount;
	unsigned long long _boldCount;
	unsigned long long _italicCount;
	unsigned long long _strikethroughCount;
	unsigned long long _messagePartNumber;
	NSMutableArray* _fontFamilyStack;
	NSMutableArray* _fontSizeStack;
	NSMutableArray* _linkStack;
	NSMutableArray* _backgroundColorStack;
	NSMutableArray* _foregroundColorStack;
	NSMutableDictionary* _currentAttributes;
	BOOL _didAddBodyAttributes;
	NSMutableAttributedString* _body;
	NSMutableArray* _fileTransferGUIDs;
	NSString* _backgroundColor;
	NSString* _foregroundColor;
	long long _baseWritingDirection;

}

@property (nonatomic,copy) NSString * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * foregroundColor;                 //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,readonly) NSAttributedString * body; 
@property (nonatomic,retain) NSArray * fileTransferGUIDs;              //@synthesize fileTransferGUIDs=_fileTransferGUIDs - In the implementation block
@property (assign) long long baseWritingDirection;                     //@synthesize baseWritingDirection=_baseWritingDirection - In the implementation block
-(id)name;
-(void)dealloc;
-(void)appendString:(id)arg1 ;
-(void)reset;
-(NSAttributedString *)body;
-(long long)baseWritingDirection;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(NSString *)foregroundColor;
-(void)setForegroundColor:(NSString *)arg1 ;
-(NSString *)backgroundColor;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(id)resultsForLogging;
-(NSArray *)fileTransferGUIDs;
-(void)setFileTransferGUIDs:(NSArray *)arg1 ;
-(void)pushLink:(id)arg1 ;
-(void)popLink;
-(void)incrementBoldCount;
-(void)decrementBoldCount;
-(void)incrementItalicCount;
-(void)decrementItalicCount;
-(void)pushFontFamily:(id)arg1 ;
-(void)pushFontSize:(id)arg1 ;
-(void)popFontFamily;
-(void)popFontSize;
-(void)incrementStrikethroughCount;
-(void)decrementStrikethroughCount;
-(void)incrementUnderlineCount;
-(void)decrementUnderlineCount;
-(void)appendBreadcrumbText:(id)arg1 withOptions:(unsigned)arg2 ;
-(void)_clearIvars;
-(void)_initIvars;
-(void)_updateFontFamily;
-(void)_updateFontSize;
-(void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3 ;
-(void)_popValueFromStack:(id)arg1 attributeName:(id)arg2 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 emoji:(long long)arg5 ;
-(void)_incrementMessagePartNumber;
-(void)pushBackgroundColor:(id)arg1 ;
-(void)popBackgroundColor;
-(void)pushForegroundColor:(id)arg1 ;
-(void)popForegroundColor;
-(void)appendFileTransferWithGUID:(id)arg1 ;
-(void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 ;
@end

