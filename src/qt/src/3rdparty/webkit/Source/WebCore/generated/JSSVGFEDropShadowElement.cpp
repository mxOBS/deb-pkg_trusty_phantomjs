/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFEDropShadowElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEDropShadowElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGFEDropShadowElement);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEDropShadowElementTableValues[14] =
{
    { "in1", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementIn1), (intptr_t)0 THUNK_GENERATOR(0) },
    { "dx", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementDx), (intptr_t)0 THUNK_GENERATOR(0) },
    { "dy", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementDy), (intptr_t)0 THUNK_GENERATOR(0) },
    { "stdDeviationX", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementStdDeviationX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "stdDeviationY", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementStdDeviationY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "x", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementX), (intptr_t)0 THUNK_GENERATOR(0) },
    { "y", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementY), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "result", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementResult), (intptr_t)0 THUNK_GENERATOR(0) },
    { "className", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementClassName), (intptr_t)0 THUNK_GENERATOR(0) },
    { "style", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementStyle), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGFEDropShadowElementConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEDropShadowElementTable = { 35, 31, JSSVGFEDropShadowElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEDropShadowElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEDropShadowElementConstructorTable = { 1, 0, JSSVGFEDropShadowElementConstructorTableValues, 0 };
class JSSVGFEDropShadowElementConstructor : public DOMConstructorObject {
public:
    JSSVGFEDropShadowElementConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGFEDropShadowElementConstructor::s_info = { "SVGFEDropShadowElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEDropShadowElementConstructorTable, 0 };

JSSVGFEDropShadowElementConstructor::JSSVGFEDropShadowElementConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSSVGFEDropShadowElementPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSSVGFEDropShadowElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDropShadowElementConstructor, JSDOMWrapper>(exec, &JSSVGFEDropShadowElementConstructorTable, this, propertyName, slot);
}

bool JSSVGFEDropShadowElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEDropShadowElementConstructor, JSDOMWrapper>(exec, &JSSVGFEDropShadowElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEDropShadowElementPrototypeTableValues[3] =
{
    { "setStdDeviation", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEDropShadowElementPrototypeFunctionSetStdDeviation), (intptr_t)2 THUNK_GENERATOR(0) },
    { "getPresentationAttribute", DontDelete | Function, (intptr_t)static_cast<NativeFunction>(jsSVGFEDropShadowElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEDropShadowElementPrototypeTable = { 4, 3, JSSVGFEDropShadowElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEDropShadowElementPrototype::s_info = { "SVGFEDropShadowElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGFEDropShadowElementPrototypeTable, 0 };

JSObject* JSSVGFEDropShadowElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGFEDropShadowElement>(exec, globalObject);
}

bool JSSVGFEDropShadowElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGFEDropShadowElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGFEDropShadowElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGFEDropShadowElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGFEDropShadowElement::s_info = { "SVGFEDropShadowElement", &JSSVGElement::s_info, &JSSVGFEDropShadowElementTable, 0 };

JSSVGFEDropShadowElement::JSSVGFEDropShadowElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGFEDropShadowElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSSVGFEDropShadowElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGFEDropShadowElementPrototype(exec->globalData(), globalObject, JSSVGFEDropShadowElementPrototype::createStructure(exec->globalData(), JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGFEDropShadowElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGFEDropShadowElement, Base>(exec, &JSSVGFEDropShadowElementTable, this, propertyName, slot);
}

bool JSSVGFEDropShadowElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGFEDropShadowElement, Base>(exec, &JSSVGFEDropShadowElementTable, this, propertyName, descriptor);
}

JSValue jsSVGFEDropShadowElementIn1(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementDx(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->dxAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementDy(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->dyAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementStdDeviationX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->stdDeviationXAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementStdDeviationY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedNumber> obj = imp->stdDeviationYAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementX(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementY(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementResult(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get());
    return result;
}


JSValue jsSVGFEDropShadowElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}


JSValue jsSVGFEDropShadowElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGFEDropShadowElement* domObject = static_cast<JSSVGFEDropShadowElement*>(asObject(slotBase));
    return JSSVGFEDropShadowElement::getConstructor(exec, domObject->globalObject());
}

JSValue JSSVGFEDropShadowElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGFEDropShadowElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGFEDropShadowElementPrototypeFunctionSetStdDeviation(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEDropShadowElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(thisValue));
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    float stdDeviationX(exec->argument(0).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    float stdDeviationY(exec->argument(1).toFloat(exec));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    imp->setStdDeviation(stdDeviationX, stdDeviationY);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsSVGFEDropShadowElementPrototypeFunctionGetPresentationAttribute(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    if (!thisValue.inherits(&JSSVGFEDropShadowElement::s_info))
        return throwVMTypeError(exec);
    JSSVGFEDropShadowElement* castedThis = static_cast<JSSVGFEDropShadowElement*>(asObject(thisValue));
    SVGFEDropShadowElement* imp = static_cast<SVGFEDropShadowElement*>(castedThis->impl());
    const String& name(ustringToString(exec->argument(0).toString(exec)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());


    JSC::JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return JSValue::encode(result);
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
