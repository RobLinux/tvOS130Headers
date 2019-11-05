/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFPythonHTMLParserDelegate <NSObject>
@optional
-(void)parser:(id)arg1 foundComment:(id)arg2;
-(void)parser:(id)arg1 foundStartTag:(id)arg2 attributes:(id)arg3;
-(void)parser:(id)arg1 foundData:(id)arg2;
-(void)parser:(id)arg1 foundEndTag:(id)arg2;
-(void)parser:(id)arg1 foundEntityRef:(id)arg2;
-(void)parser:(id)arg1 foundCharacterRef:(id)arg2;
-(void)parser:(id)arg1 foundDoctypeDeclaration:(id)arg2;
-(void)parser:(id)arg1 foundProcessingInstruction:(id)arg2;
-(void)parser:(id)arg1 foundUnknownDeclaration:(id)arg2;

@end

