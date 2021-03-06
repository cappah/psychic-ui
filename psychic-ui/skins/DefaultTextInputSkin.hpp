#pragma once

#include "../components/TextInput.hpp"

namespace psychic_ui {
    class DefaultTextInputSkin : public TextInputSkin {
    public:
        DefaultTextInputSkin();
    private:
        void addedToComponent() override;
        void removedFromComponent() override;
        void draw(SkCanvas *canvas) override;
    };
}

